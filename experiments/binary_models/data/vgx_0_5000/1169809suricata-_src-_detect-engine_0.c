void DetectPktInspectEngineRegister(const char *name,
InspectionBufferGetPktDataPtr GetPktData,
InspectionBufferPktInspectFunc Callback)
{
DetectBufferTypeRegister(name);
const int sm_list = DetectBufferTypeGetByName(name);
if (sm_list == -1) {
FatalError("failed to register inspect engine %s", name);
}

if ((sm_list < DETECT_SM_LIST_MATCH) || (sm_list >= SHRT_MAX) ||
(Callback == NULL))
{
SCLogError("Invalid arguments");
BUG_ON(1);
}

DetectEnginePktInspectionEngine *new_engine = SCCalloc(1, sizeof(*new_engine));
if (unlikely(new_engine == NULL)) {
FatalError("failed to register inspect engine %s: %s", name, strerror(errno));
}
new_engine->sm_list = (uint16_t)sm_list;
new_engine->sm_list_base = (uint16_t)sm_list;
new_engine->v1.Callback = Callback;
new_engine->v1.GetData = GetPktData;

if (g_pkt_inspect_engines == NULL) {
g_pkt_inspect_engines = new_engine;
} else {
DetectEnginePktInspectionEngine *t = g_pkt_inspect_engines;
while (t->next != NULL) {
t = t->next;
}

t->next = new_engine;
}
}