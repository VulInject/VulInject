VAR1 *FUN1(VAR2 *VAR3)
{
while (VAR3->write == VAR3->read) {
if (FUN2(&VAR3->VAR4) != 0)
FUN3(VAR5);
}

FUN4(&VAR3->VAR4); 


FUN5();

return VAR3->VAR6[VAR3->read & (VAR3->VAR7 - 1)];
}