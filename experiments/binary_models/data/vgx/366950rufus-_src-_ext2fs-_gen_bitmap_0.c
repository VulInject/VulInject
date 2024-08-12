VAR1 FUN1(ext2fs_generic_bitmap VAR2,
errcode_t VAR3,
__u32 VAR4, __u32 VAR5,
void *VAR6)
{
ext2fs_generic_bitmap_32 VAR7 = (VAR8) VAR2;

if (!VAR7 || (VAR7->VAR3 != VAR3))
return VAR3;

if ((VAR4 < VAR7->VAR4) || (VAR4+VAR5-1 > VAR7->VAR9))
return VAR10;

memcpy(VAR6, VAR7->VAR11 + (VAR4 >> 3), (VAR5+7) >> 3);
return 0;
}