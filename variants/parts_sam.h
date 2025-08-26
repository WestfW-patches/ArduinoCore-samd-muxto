/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2014, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
#ifndef _PARTS_SAM_INCLUDED_
#define _PARTS_SAM_INCLUDED_
#include <sam.h>


/*
 * ----------------------------------------------------------------------------
 * SAMD51 family. These are not included in the SAMD or SAMD_SERIES defines
 * ----------------------------------------------------------------------------
 */

/* SAMD51 series */

/* Entire SAMD51G series */
#define SAMD51G SAMD51G_SERIES

/* Entire SAMD51J series */
#define SAMD51J SAMD51J_SERIES

/* Entire SAMD51N series */
#define SAMD51N SAMD51N_SERIES

/* Entire SAMD51P series */
#define SAMD51P SAMD51P_SERIES

/* Entire SAMD51 series */
#define SAMD51  SAMD51_SERIES

/*
 * ----------------------------------------------------------------------------
 * SAML family
 * ----------------------------------------------------------------------------
 */

/* SAML21 series */

/* Entire SAML21E series */
#define SAML21E	SAML21E_SERIES

/* Entire SAML21G series */
#define SAML21G	SAML21G_SERIES

/* Entire SAML21J series */
#define SAML21J	SAML21J_SERIES

/* Entire SAML21 series */
#define SAML21	SAML21_SERIES

/* Entire SAML family */
#define SAML	SAML_SERIES

/*
 * ----------------------------------------------------------------------------
 * SAMC family
 * ----------------------------------------------------------------------------
 */

/* SAMC21 series */

/* Entire SAMC21E series */
#define SAMC21E	SAMC21E_SERIES

/* Entire SAMC21G series */
#define SAMC21G	SAMC21G_SERIES

/* Entire SAMC21J series */
#define SAMC21J	SAMC21J_SERIES

/* Entire SAMC21 series */
#define SAMC21	SAMC21_SERIES

/* Entire SAMC family */
#define SAMC SAMC_SERIES

/*
 * ----------------------------------------------------------------------------
 * SAMD family
 * ----------------------------------------------------------------------------
 */

/* SAMD11 series */

#define SAMD11C	SAMD11C14

#define SAMD11D14 ( \
    part_is_defined( SAMD11D14AS ) || \
    part_is_defined( SAMD11D14AM ) || \
    part_is_defined( SAMD11D14AU ) )
#define SAMD11D	SAMD11D14

/* Entire SAMD11 series */
#define SAMD11	SAMD11_SERIES

/* SAMD21 series */

#define SAMD21E_SERIES (SAMD21E15 || SAMD21E16 || SAMD21E17 || SAMD21E18)
#define SAMD21E	SAMD21E_SERIES

/* Entire SAMD21G series */
#define SAMD21G_SERIES (SAMD21G15 || SAMD21G16 || SAMD21G17 || SAMD21G18)
#define SAMD21G	SAMD21G_SERIES

/* Entire SAMD21J series */
#define SAMD21J_SERIES (SAMD21J15 || SAMD21J16 || SAMD21J17 || SAMD21J18)
#define SAMD21J	SAMD21J_SERIES


/* Entire SAMD21 series */
#define SAMD21	SAMD21_SERIES

/* Entire SAMD family */
#define SAMD	SAMD_SERIES

#endif
