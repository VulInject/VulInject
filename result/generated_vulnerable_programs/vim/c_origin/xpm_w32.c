

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include "xpm_w32.h"


#define FOR_MSW

#include "xpm.h"


    int
LoadXpmImage(
    char    *filename,
    HBITMAP *hImage,
    HBITMAP *hShape)
{
    XImage	    *img;  
    XImage	    *shp;  
    XpmAttributes   attr;
    int		    res;
    HDC		    hdc = CreateCompatibleDC(NULL);

    attr.valuemask = 0;
    res = XpmReadFileToImage(&hdc, filename, &img, &shp, &attr);
    DeleteDC(hdc);
    if (res < 0)
	return -1;
    if (shp == NULL)
    {
	if (img)
	    XDestroyImage(img);
	return -1;
    }
    *hImage = img->bitmap;
    *hShape = shp->bitmap;
    return 0;
}
