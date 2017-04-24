/* Generated by wayland-scanner 1.13.0 */

/*
 * Copyright © 2012 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_buffer_interface;
extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *types[] = {
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	&wl_surface_interface,
	&wl_output_interface,
	&wl_buffer_interface,
};

static const struct wl_message weston_test_requests[] = {
	{ "move_surface", "oii", types + 2 },
	{ "move_pointer", "ii", types + 0 },
	{ "send_button", "iu", types + 0 },
	{ "activate_surface", "?o", types + 5 },
	{ "send_key", "uu", types + 0 },
	{ "device_release", "s", types + 0 },
	{ "device_add", "s", types + 0 },
	{ "capture_screenshot", "oo", types + 6 },
};

static const struct wl_message weston_test_events[] = {
	{ "pointer_position", "ff", types + 0 },
	{ "capture_screenshot_done", "", types + 0 },
};

WL_EXPORT const struct wl_interface weston_test_interface = {
	"weston_test", 1,
	8, weston_test_requests,
	2, weston_test_events,
};

static const struct wl_message weston_test_runner_requests[] = {
	{ "destroy", "", types + 0 },
	{ "run", "s", types + 0 },
};

static const struct wl_message weston_test_runner_events[] = {
	{ "finished", "", types + 0 },
};

WL_EXPORT const struct wl_interface weston_test_runner_interface = {
	"weston_test_runner", 1,
	2, weston_test_runner_requests,
	1, weston_test_runner_events,
};

