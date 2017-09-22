FROM debian:9 

MAINTAINER Dalibor Menkovic <dalibor.menkovic@gmail.com>

RUN apt-get update -y && \
	apt-get install -y 

RUN apt-get install -y git gcc make re2c php7.0 php7.0-json php7.0-dev libpcre3-dev sudo vim

COPY zephir /tmp/zephir

RUN cd /tmp/zephir && ./install -c
RUN rm -rf /tmp/zephir


