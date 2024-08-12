int
FUN1(const void *VAR1, void *VAR2, size_t VAR3)
{
pmap_t VAR4 = VAR5->VAR6->VAR7.VAR8;
vaddr_t VAR9;
vsize_t VAR10;
int VAR11;

while (VAR3 > 0) {
VAR11 = FUN2(VAR4, (VAR12)VAR2, &VAR9, &VAR10);
if (VAR11)
return VAR11;
if (VAR10 > VAR3)
VAR10 = VAR3;
VAR11 = FUN3(VAR1, (void *)VAR9, VAR10);
FUN4();
if (VAR11)
return VAR11;

VAR1 = (const char *)VAR1 + VAR10;
VAR2 = (char *)VAR2 + VAR10;
VAR3 -= VAR10;
}

return 0;
}