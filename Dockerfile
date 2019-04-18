FROM ubuntu:18.04
RUN apt-get update
RUN apt-get upgrade -y
RUN apt install  --yes build-essential libssl-dev
ADD Makefile /hash/Makefile
ADD gen-coordinates.cpp /hash/gen-coordinates.cpp
RUN cd /hash/ && make
CMD ["/hash/cracker"]
