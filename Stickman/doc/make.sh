#!/bin/bash

latex -interaction=nonstopmode stickman.tex
latex -interaction=nonstopmode stickman.tex
latex -interaction=nonstopmode stickman.tex

./clean.sh
