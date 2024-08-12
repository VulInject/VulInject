static int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
vm_flags_t VAR4 = VAR2->VAR4;
int write = (VAR3 & VAR5);
int VAR6 = (VAR3 & VAR7);

if (VAR4 & (VAR8 | VAR9))
return -VAR10;

if (VAR3 & VAR11 && !FUN2(VAR2))
return -VAR10;

if ((VAR3 & VAR12) && FUN3(VAR2))
return -VAR13;

if (FUN4(VAR2))
return -VAR10;

if (write) {
if (!(VAR4 & VAR14)) {
if (!(VAR3 & VAR15))
return -VAR10;

if (FUN5(VAR2))
return -VAR10;

if (!FUN6(VAR4))
return -VAR10;
}
} else if (!(VAR4 & VAR16)) {
if (!(VAR3 & VAR15))
return -VAR10;

if (!(VAR4 & VAR17))
return -VAR10;
}

if (!FUN7(VAR2, write, false, VAR6))
return -VAR10;
return 0;
}