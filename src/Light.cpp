//
// Created by Yann on 19/10/2026.
//

#include "Light.h"

Light() {
    Sensor();
}
~Light() {
    ~Sensor();
}
Light & operator=(const Light& l) {
    this.time=l.time;
    this.id=l.id;
    this.type=l.type;
    this.value=l.value;
    this.ptrServeur=l.ptrServeur;
    return *this;
}

Light & Light(const Light&) {
    this.time=l.time;
    this.id=l.id;
    this.type=l.type;
    this.value=l.value;
    this.ptrServeur=l.ptrServeur;
    return *this;
}