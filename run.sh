#!/bin/bash

CUR="."
DOCKER_DIR="${CUR}/docker"

if [ ! -d "${DOCKER_DIR}/zephir" ];
then 
	git clone https://github.com/phalcon/zephir.git "${DOCKER_DIR}/zephir"
fi

docker-compose -f docker/compose.yml run --entrypoint /bin/bash --rm zephirdock
