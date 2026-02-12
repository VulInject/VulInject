static void ospf6_nssa_flush_area(struct ospf6_area *area)
{
uint16_t type;
struct ospf6_lsa *lsa = NULL, *type5 = NULL;
struct ospf6 *ospf6 = area->ospf6;

if (IS_OSPF6_DEBUG_NSSA)
zlog_debug("%s: area %s", __func__, area->name);


type = htons(OSPF6_LSTYPE_TYPE_7);
for (ALL_LSDB_TYPED_ADVRTR(area->lsdb, type, ospf6->router_id, lsa)) {
lsa->header->age = htons(OSPF_LSA_MAXAGE);
SET_FLAG(lsa->flag, OSPF6_LSA_FLUSH);
ospf6_flood(NULL, lsa);


if (ospf6_check_and_set_router_abr(ospf6)) {
type5 = ospf6_lsdb_lookup(
htons(OSPF6_LSTYPE_AS_EXTERNAL),
lsa->external_lsa_id, ospf6->router_id,
ospf6->lsdb);
if (type5
&& CHECK_FLAG(type5->flag, OSPF6_LSA_LOCAL_XLT)) {
type5->header->age = htons(OSPF_LSA_MAXAGE);
SET_FLAG(type5->flag, OSPF6_LSA_FLUSH);
ospf6_flood(NULL, type5);
}
}
}
}