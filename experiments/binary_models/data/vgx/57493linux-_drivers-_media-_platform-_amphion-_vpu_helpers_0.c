VAR1 FUN1(struct VAR2 *VAR3)
{
struct vpu_rpc_buffer_desc VAR4;

if (FUN2(VAR3, &VAR4))
return 0;

if (VAR4.VAR5 > VAR4.VAR6)
return VAR4.VAR5 - VAR4.VAR6;
else if (VAR4.VAR5 < VAR4.VAR6)
return (VAR4.VAR7 - VAR4.VAR8 + VAR4.VAR5 - VAR4.VAR6);
else
return VAR4.VAR7 - VAR4.VAR8;
}