#include "zmk-helpers/key-labels/adv360.h"

/* Left hand */

ZMK_HOLD_TAP(hml_index,
    label = "HML_INDEX";
    tapping-term-ms = <250>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_HOLD_TAP(hml_index_bilateral,
    label = "HML_INDEX_BILATERAL";
    tapping-term-ms = <250>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&hml_index_hold>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_MACRO_ONE_PARAM(hml_index_hold,
    label = "HML_INDEX_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlIndex
      , <&macro_press &mo LAYER_HmlIndex>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlIndex
      , <&macro_release &mo LAYER_HmlIndex>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hml_index_tap,
    label = "HML_INDEX_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp LEFT_INDEX_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hml_middle,
    label = "HML_MIDDLE";
    tapping-term-ms = <270>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_HOLD_TAP(hml_middle_bilateral,
    label = "HML_MIDDLE_BILATERAL";
    tapping-term-ms = <270>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&hml_middle_hold>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_MACRO_ONE_PARAM(hml_middle_hold,
    label = "HML_MIDDLE_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlMiddle
      , <&macro_press &mo LAYER_HmlMiddle>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlMiddle
      , <&macro_release &mo LAYER_HmlMiddle>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hml_middle_tap,
    label = "HML_MIDDLE_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp LEFT_MIDDY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hml_ring,
    label = "HML_RING";
    tapping-term-ms = <300>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_HOLD_TAP(hml_ring_bilateral,
    label = "HML_RING_BILATERAL";
    tapping-term-ms = <300>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&hml_ring_hold>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_MACRO_ONE_PARAM(hml_ring_hold,
    label = "HML_RING_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlRing
      , <&macro_press &mo LAYER_HmlRing>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlRing
      , <&macro_release &mo LAYER_HmlRing>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hml_ring_tap,
    label = "HML_RING_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp LEFT_RINGY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hml_pinky,
    label = "HML_PINKY";
    tapping-term-ms = <330>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_HOLD_TAP(hml_pinky_bilateral,
    label = "HML_PINKY_BILATERAL";
    tapping-term-ms = <330>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&hml_pinky_hold>, <&kp>;
    hold-trigger-key-positions = <
        6  7  8  9  10 11 12
        19 20 21 22 23 24 25
        32 33 34 35 36 37 38
        45 46 47 48 49 50
        57 58 59 60 61 62
    >;
)

ZMK_MACRO_ONE_PARAM(hml_pinky_hold,
    label = "HML_PINKY_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlPinky
      , <&macro_press &mo LAYER_HmlPinky>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmlPinky
      , <&macro_release &mo LAYER_HmlPinky>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hml_pinky_tap,
    label = "HML_PINKY_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp LEFT_PINKY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

/* Right hand */

ZMK_HOLD_TAP(hmr_index,
    label = "HMR_INDEX";
    tapping-term-ms = <250>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_HOLD_TAP(hmr_index_bilateral,
    label = "HMR_INDEX_BILATERAL";
    tapping-term-ms = <250>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&hmr_index_hold>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_MACRO_ONE_PARAM(hmr_index_hold,
    label = "HMR_INDEX_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrIndex
      , <&macro_press &mo LAYER_HmrIndex>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrIndex
      , <&macro_release &mo LAYER_HmrIndex>
      #endif
      ;
)


ZMK_MACRO_ONE_PARAM(hmr_index_tap,
    label = "HMR_INDEX_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp RIGHT_INDEX_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hmr_middle,
    label = "HMR_MIDDLE";
    tapping-term-ms = <270>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_HOLD_TAP(hmr_middle_bilateral,
    label = "HMR_MIDDLE_BILATERAL";
    tapping-term-ms = <270>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    hold-while-undecided;
    bindings = <&hmr_middle_hold>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_MACRO_ONE_PARAM(hmr_middle_hold,
    label = "HMR_MIDDLE_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrMiddle
      , <&macro_press &mo LAYER_HmrMiddle>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrMiddle
      , <&macro_release &mo LAYER_HmrMiddle>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hmr_middle_tap,
    label = "HMR_MIDDLE_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp RIGHT_MIDDY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hmr_ring,
    label = "HMR_RING";
    tapping-term-ms = <300>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_HOLD_TAP(hmr_ring_bilateral,
    label = "HMR_RING_BILATERAL";
    tapping-term-ms = <300>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&hmr_ring_hold>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_MACRO_ONE_PARAM(hmr_ring_hold,
    label = "HMR_RING_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrRing
      , <&macro_press &mo LAYER_HmrRing>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrRing
      , <&macro_release &mo LAYER_HmrRing>
      #endif
      ;
)

ZMK_MACRO_ONE_PARAM(hmr_ring_tap,
    label = "HMR_RING_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp RIGHT_RINGY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(hmr_pinky,
    label = "HMR_PINKY";
    tapping-term-ms = <330>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_HOLD_TAP(hmr_pinky_bilateral,
    label = "HMR_PINKY_BILATERAL";
    tapping-term-ms = <330>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    hold-trigger-on-release;
    bindings = <&hmr_pinky_hold>, <&kp>;
    hold-trigger-key-positions = <
        0  1  2  3  4  5
        13 14 15 16 17 18
        26 27 28 29 30 31
        39 40 41 42 43 44
        51 52 53 54 55 56
    >;
)

ZMK_MACRO_ONE_PARAM(hmr_pinky_hold,
    label = "HMR_PINKY_HOLD";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_param_1to1>
      , <&macro_press &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrPinky
      , <&macro_press &mo LAYER_HmrPinky>
      #endif
      , <&macro_pause_for_release>
      , <&macro_param_1to1>
      , <&macro_release &kp MACRO_PLACEHOLDER>
      #ifdef LAYER_HmrPinky
      , <&macro_release &mo LAYER_HmrPinky>
      #endif
      ;
)


ZMK_MACRO_ONE_PARAM(hmr_pinky_tap,
    label = "HMR_PINKY_TAP";
    wait-ms = <0>;
    tap-ms = <0>;
    bindings
      = <&macro_release
          &kp LSFT &kp RSFT
          &kp LALT &kp RALT
          &kp LCTL &kp RCTL
          &kp LGUI &kp RGUI>
      , <&macro_tap &kp RIGHT_PINKY_KEY>
      , <&macro_param_1to1>
      , <&macro_tap &kp MACRO_PLACEHOLDER>
      ;
)

ZMK_HOLD_TAP(thumb,
    flavor = "balanced";
    tapping-term-ms = <330>;
    quick-tap-ms = <175>;
    bindings = <&mo>, <&kp>;
)

