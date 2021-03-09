#!/bin/bash
export FORCE_ONLY_CUDA=1
rm -r build
python setup.py build -j8
python setup.py bdist_wheel