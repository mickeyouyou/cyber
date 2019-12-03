#!/usr/bin/env bash

# Usage:
#   ./build_geek_pcl.sh geek.Dockerfile
# Commit 
# docker commit 5a69f1c7051c geekstyle/geek_lite:geek_pcl

REPO=geekstyle/geek_lite
ARCH=$(uname -m)
TIME=$(date +%Y%m%d_%H%M)

TAG="${REPO}:cyber-${ARCH}-18.04-${TIME}"

CONTAINER_ID=$(docker ps | grep cyber_${USER}| awk '{print $1}')

docker commit "$CONTAINER_ID" "$TAG"
# docker tag "$TAG" "$RELEASE_NAME"
docker stop "$CONTAINER_ID"

# Please provide credential if you want to login automatically.
DOCKER_USER=""
DOCKER_PASSWORD=""
if [ ! -z "${DOCKER_PASSWORD}" ]; then
  docker login -u ${DOCKER_USER} -p ${DOCKER_PASSWORD} ${DOCKER_REGISTRY}
fi

docker push ${TAG}