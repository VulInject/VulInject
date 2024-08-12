int FUN1(ext2fs_generic_bitmap VAR1,
blk_t VAR2)
{
ext2fs_generic_bitmap_32 VAR3 = (VAR4) VAR1;

if (!FUN2(VAR1)) {
if (FUN3(VAR1)) {
FUN4(VAR1, VAR5);
return FUN5(VAR1, VAR2);
}
FUN6(0, VAR6,
"", (unsigned long) VAR2);
return 0;
}

if ((VAR2 < VAR3->VAR7) || (VAR2 > VAR3->VAR8)) {
FUN7(VAR1, VAR9, VAR2);
return 0;
}
return FUN8(VAR2 - VAR3->VAR7, VAR3->VAR1);
}