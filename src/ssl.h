/* SSL support.
   Copyright (C) 2000-2012, 2015, 2018-2024 Free Software Foundation,
   Inc.
   Originally contributed by Christian Fraenkel.

This file is part of GNU Wget.

GNU Wget is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

GNU Wget is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with Wget.  If not, see <http://www.gnu.org/licenses/>.

Additional permission under GNU GPL version 3 section 7

If you modify this program, or any covered work, by linking or
combining it with the OpenSSL project's OpenSSL library (or a
modified version of that library), containing parts covered by the
terms of the OpenSSL or SSLeay licenses, the Free Software Foundation
grants you additional permission to convey the resulting work.
Corresponding Source for a non-source form of such a combination
shall include the source code for the parts of OpenSSL used as well
as that of the covered work.  */

#ifndef GEN_SSLFUNC_H
#define GEN_SSLFUNC_H

bool ssl_init (void);
void ssl_cleanup (void);
bool ssl_connect_wget (int, const char *, int *);
bool ssl_check_certificate (int, const char *);
const char *ssl_get_cipher_name (int);
enum secure_protocol ssl_get_protocol (int);

#endif /* GEN_SSLFUNC_H */
