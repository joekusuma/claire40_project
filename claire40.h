
#pragma once

#include "quantum.h"


#define LAYOUT( \
    L000, L001, L002, L003,       R000, R001, R002, R003, R004, R005, R006, R007, R008, R009, R010, R011, R012,  \
    L100, L101, L102, L103,       R100, R101, R102, R103, R104, R105, R106, R107, R108, R109, R110,       R112, \
    L200, L201, L202, L203,       R200,       R202, R203, R204, R205, R206, R207, R208, R209, R210, R211, R212, \
    L300, L301, L302, L303,       R300, R301, R302,                   R306,                   R310, R311, R312  \
) { \
    { L000,  L001,  L002,  L003,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L100,  L101,  L102,  L103,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L200,  L201,  L202,  L203,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { L300,  L301,  L302,  L303,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { R000,  R001,  R002,  R003,  R004,  R005,  R006,  R007,  R008,  R009,  R010,  R011,  R012 }, \
    { R100,  R101,  R102,  R103,  R104,  R105,  R106,  R107,  R108,  R109,  R110,  KC_NO, R112 }, \
    { R200,  KC_NO, R202,  R203,  R204,  R205,  R206,  R207,  R208,  R209,  R210,  R211,  R212 }, \
    { R300,  R301,  R302,  KC_NO, KC_NO, KC_NO, R306,  KC_NO, KC_NO, KC_NO, R310,  R311,  R312 }  \
}
