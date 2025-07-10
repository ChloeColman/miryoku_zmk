// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY

#if !defined (MIRYOKU_LAYOUTMAPPING_SOFLE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_SOFLE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp GRAVE  &kp N1  &kp N2    &kp N3    &kp N4     &kp N5                                 &kp N6     &kp N7     &kp N8     &kp N9    &kp N0    &kp MINUS \
&kp TAB    K00     K01       K02       K03        K04                                    K05        K06        K07        K08       K09       &kp BSPC  \
&kp ESC    K10     K11       K12       K13        K14                                    K15        K16        K17        K18       K19       &kp SQT   \
&kp LSHIFT K20     K21       K22       K23        K24    &kp C_MUTE    &kp C_PLAY_PAUSE  K25        K26        K27        K28       K29       &kp RSHFT \
                   U_CPY    U_PST      K32        K33    K34           K35               K36        K37        &kp LEFT   &kp RIGHT

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 53 54
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 55 56

#endif