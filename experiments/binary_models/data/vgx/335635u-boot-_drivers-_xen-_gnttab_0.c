const char *FUN1(int16_t VAR1)
{
VAR1 = -VAR1;
if (VAR1 < 0 || VAR1 >= FUN2(VAR2))
return "";
else
return VAR2[VAR1];
}