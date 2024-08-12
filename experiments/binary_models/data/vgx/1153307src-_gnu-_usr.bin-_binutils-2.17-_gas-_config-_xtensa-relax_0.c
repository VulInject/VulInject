FUN1 (long VAR1)
{
if (VAR1 & 0x80)
return (VAR1 & 0xff) | ~0xff;
else
return (VAR1 & 0xff);
}