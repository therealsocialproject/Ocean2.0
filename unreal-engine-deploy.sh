#!/bin/bash

# (ignore files if already there)

DEPLOYMENT_PATH="/"

### Deploy Config
cp "conf/"* $DEPLOYMENT_PATH/Config

### Deploy Source
cp "src/"* $DEPLOYMENT_PATH/Private
cp "include/"* $DEPLOYMENT_PATH/Classes

### Deploy Shaders
cp "shader/"* $DEPLOYMENT_PATH/Shader

### Deploy Assets
cp "asset/"* $DEPLOYMENT_PATH/Asset

#### Deploy Models

#### Deploy Sound

#### Deploy Music

#### Deploy Sprites

#### Deploy Particles

#### Deploy Video

#### Deploy Materials

#### Deploy Plugins

#### Deploy Misc


