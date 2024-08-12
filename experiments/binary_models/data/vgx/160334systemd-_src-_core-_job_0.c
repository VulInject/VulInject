int FUN1(VAR1 *VAR2, VAR1*** VAR3) {
_cleanup_free_ VAR1** VAR4 = NULL;
VAR5 *VAR6 = NULL;
size_t VAR7 = 0;



assert(VAR2);
assert(VAR3);

if (VAR2->VAR8) {
*VAR3 = NULL;
return 0;
}

FUN2(VAR6, VAR2->VAR9, VAR10) {
if (!VAR6->VAR11)
continue;
if (FUN3(VAR2, VAR6->VAR11, VAR10) <= 0)
continue;

if (!FUN4(VAR4, VAR7+1))
return -VAR12;
VAR4[VAR7++] = VAR6->VAR11;
}

FUN2(VAR6, VAR2->VAR9, VAR13) {
if (!VAR6->VAR11)
continue;
if (FUN3(VAR2, VAR6->VAR11, VAR13) <= 0)
continue;

if (!FUN4(VAR4, VAR7+1))
return -VAR12;
VAR4[VAR7++] = VAR6->VAR11;
}

VAR7 = FUN5(VAR4, VAR7);

*VAR3 = FUN6(VAR4);

return (int) VAR7;
}