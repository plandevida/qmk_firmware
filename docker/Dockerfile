FROM archlinux

ENV TZ=Europe/Madrid
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN pacman -Syy --noconfirm && pacman -Syy base-devel --noconfirm \
    avr-libc \
    avrdude \
    arm-none-eabi-binutils \
    avr-binutils \
    dfu-programmer \
    dfu-util \
    gcc \
    avr-gcc \
    arm-none-eabi-gcc \
    git \
    arm-none-eabi-newlib \
    python3 \
    python-pip \
    python-setuptools \
    unzip \
    wget \
    zip \
    make

# Install python packages
RUN pip3 install nose2 qmk jsonschema  # FIXME(skullydazed): remove jsonschema after merge to master

# Set the default location for qmk_firmware
ENV QMK_HOME /qmk_firmware

VOLUME /qmk_firmware
WORKDIR /qmk_firmware
#COPY . .

RUN qmk config user.keyboard=crkbd/rev1/common && \
    qmk config user.keymap=plandevida-jorne && \
    cp util/udev/50-qmk.rules /etc/udev/rules.d/ && \
    pacman -U https://archive.archlinux.org/packages/a/avr-gcc/avr-gcc-8.3.0-1-x86_64.pkg.tar.xz --noconfirm && \
    pacman -Sc --noconfirm

#CMD qmk clean && qmk compile
