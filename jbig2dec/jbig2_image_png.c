

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "os_types.h"

#include <stdio.h>
#include <stdlib.h>

#include "jbig2.h"
#include "jbig2_priv.h"
#include "jbig2_image.h"



int jbig2_image_write_png_file(Jbig2Image *image, char *filename)
{
    FILE *out;
    int	error;

    if ((out = fopen(filename, "wb")) == NULL) {
		fprintf(stderr, "unable to open '%s' for writing\n", filename);
		return 1;
    }

    error = jbig2_image_write_png(image, out);

    fclose(out);
    return (error);
}

/* write out an image struct in png format to an open file pointer */

int jbig2_image_write_png(Jbig2Image *image, FILE *out)
{
	
	return 0;
}
