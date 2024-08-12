static bool FUN1(uint8_t VAR1)
{
if (VAR1 >= VAR2)
return false;

FUN2(&VAR3);
if (VAR4 == VAR1)
return true;

VAR4 = VAR1;
VAR5 = 1 << VAR4;
return VAR6->write(VAR6, 0x02, ~VAR5);
}