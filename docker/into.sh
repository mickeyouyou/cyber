#!/usr/bin/env bash

ARCH=$(uname -m)
CMD=""

CYBER_ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )"

xhost +local:root 1>/dev/null 2>&1

if [ ${ARCH} == "x86_64" ]; then
    docker exec \
        -u $USER \
        -it cyber_$USER \
        /bin/bash
elif [ ${ARCH} == "aarch64" ]; then
    warning "!!! For the first time after starting the Cyber RT container, please run the following two commands: !!!"
    warning "!!!   1) docker/docker_adduser.sh !!!"
    warning "!!!   2) su $USER !!!"
    warning "! To exit, please use 'ctrl+p ctrl+q' !"

    docker attach cyber_$USER

else
    echo "Unknown architecture: ${ARCH}"
    exit 0
fi

xhost -local:root 1>/dev/null 2>&1
