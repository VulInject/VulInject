static VAR1 FUN1(struct VAR2 *VAR3)
{
struct bpf_map_info VAR4;
__u32 VAR5 = sizeof(VAR4);
int VAR6;

memset(&VAR4, 0, VAR5);
VAR6 = FUN2(FUN3(VAR3), &VAR4, &VAR5);
if (VAR6)
return 0;
return VAR4.VAR7;
}