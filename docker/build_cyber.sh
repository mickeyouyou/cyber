#!/usr/bin/env bash

###############################################################################
# Copyright 2019 The Apollo Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
###############################################################################

# Usage:
#   ./build_cyber.sh ./cyber.x86_64.dockerfile [build|download]
# Or
#   ./build_cyber.sh ./cyber.aarch64.dockerfile [build|download]
DOCKERFILE=$1

CONTEXT="$(dirname "${BASH_SOURCE[0]}")"

REPO=geekstyle/geek_lite
ARCH=$(uname -m)
TIME=$(date +%Y%m%d_%H%M)

TAG="${REPO}:cyber-${ARCH}-18.04-${TIME}"

# Fail on first error.
set -e
if [[ $DOCKERFILE == *$ARCH* ]]; then
    echo "docker file gets matched"
    docker build -t ${TAG} -f ${DOCKERFILE} ${CONTEXT}
else
    echo "docker file '$DOCKERFILE' doesn't match"
    exit
fi

echo "Built new image ${TAG}"

# docker push ${TAG}