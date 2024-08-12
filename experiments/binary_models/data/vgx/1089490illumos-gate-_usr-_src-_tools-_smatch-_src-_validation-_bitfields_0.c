* for array VAR1
*
* ""
static struct {
int VAR2:4;
} VAR3;

extern int VAR4[];

static int FUN1(void)
{
return VAR4[VAR3.VAR2];
}