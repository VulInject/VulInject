static VAR1 FUN1(struct VAR2 *VAR3, u8 VAR4)
{
u8 VAR5 = VAR3->VAR5;

if (VAR4 == VAR6)
return 0xffffffffffffffffULL;

if (VAR5 == 0)
return 0xffffffffffffffffULL;
else if (VAR5 == 1)
return 0xfffffffffffffff0ULL;
else if (VAR5 == 2)
return 0xffffffffffffefe0ULL;
else if (VAR5 == 3)
return 0xffffffffffffcfc0ULL;
else if (VAR5 == 4)
return 0xffffffffffff8f80ULL;
else
return 0xffffffffffff0f00ULL;
}