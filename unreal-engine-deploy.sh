#!/bin/bash

# (ignore files if already there)

DEPLOYMENT_PATH="../carcass/"

cp -r -v "deploy/Binaries" $DEPLOYMENT_PATH
cp -r -v "deploy/Content" $DEPLOYMENT_PATH
cp -r -v "deploy/Intermediate" $DEPLOYMENT_PATH
