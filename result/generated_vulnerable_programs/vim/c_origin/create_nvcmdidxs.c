



#include "vim.h"


#include "nv_cmds.h"

#include <stdio.h>

int main(void)
{
    size_t i;

    for (i = 0; i < NV_CMDS_SIZE; i++)
    {
	int cmdchar = nv_cmds[i];

	
	if (cmdchar < 0)
	    cmdchar = -cmdchar;
	printf("%d\n", cmdchar);
    }
    return 0;
}
