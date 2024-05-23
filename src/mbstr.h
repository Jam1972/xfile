/*
 * Copyright (C) 2023-2024 alx@fastestcode.org
 * This software is distributed under the terms of the X/MIT license.
 * See the included COPYING file for further information.
 */

#ifndef MBSTR_H
#define MBSTR_H

/* Shortens a multibyte string to max_chrs, replacing removed characters
 * with an ellipsis. If ltor is True, the string is shortened on the left.
 * Returns a string allocated from heap, or NULL on error. */
char* shorten_mb_string(const char*, size_t max_chrs, int ltor);

/* Converts a multibyte string to lowercase.
 * Returns a string allocated from heap, or NULL on error. */
char* mbs_tolower(const char *src);

/* Returns number of characters in a multibyte string */
size_t mb_strlen(const char*);

/* Makes the pointed string suitable for GUI display by replacing control
 * characters with whitespace, and discarding any invalid multibyte sequences.
 * Returns new string allocated from heap, or NULL on malloc error. */
char* mbs_make_displayable(const char *src);

#endif /* MBSTR_H */
