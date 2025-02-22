#pragma once

// Camera related definitions required by both AP_Camera and AP_Mount are here
// this avoids issues that would occur if AP_Mount and AP_Camera included each other

#include <stdint.h>

// set zoom specified as a rate or percentage
// enumerators match MAVLink CAMERA_ZOOM_TYPE
enum class ZoomType : uint8_t {
    RATE = 1,   // zoom in, out or hold (zoom out = -1, hold = 0, zoom in = 1). Same as ZOOM_TYPE_CONTINUOUS
    PCT = 2     // zoom to a percentage (from 0 to 100) of the full range. Same as ZOOM_TYPE_RANGE
};

// set focus specified as a rate or percentage
// enumerators match MAVLink CAMERA_FOCUS_TYPE
enum class FocusType : uint8_t {
    RATE = 1,   // focus in, out or hold (focus in = -1, hold = 0, focus out = 1). Same as FOCUS_TYPE_CONTINUOUS
    PCT = 2,    // focus to a percentage (from 0 to 100) of the full range. Same as FOCUS_TYPE_RANGE
    AUTO = 4    // focus automatically. Same as FOCUS_TYPE_AUTO
};

// tracking types when tracking an object in the video stream
enum class TrackingType : uint8_t {
    NONE = 0,       // tracking is inactive
    POINT = 1,      // tracking a point
    RECTANGLE = 2   // tracking a rectangle
};
