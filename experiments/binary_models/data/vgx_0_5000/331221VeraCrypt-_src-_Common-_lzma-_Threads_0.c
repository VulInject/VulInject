WRes Thread_Create_With_Affinity(CThread *p, THREAD_FUNC_TYPE func, LPVOID param, CAffinityMask affinity)
{
Print("Thread_Create_WithAffinity");
CCpuSet cs;
unsigned i;
CpuSet_Zero(&cs);
for (i = 0; i < sizeof(affinity) * 8; i++)
{
if (affinity == 0)
break;
if (affinity & 1)
{
CpuSet_Set(&cs, i);
}
affinity >>= 1;
}
return Thread_Create_With_CpuSet(p, func, param, &cs);
}