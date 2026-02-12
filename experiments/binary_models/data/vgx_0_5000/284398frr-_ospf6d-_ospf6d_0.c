
DEFUN(show_ipv6_ospf6_database, show_ipv6_ospf6_database_cmd,
"show ipv6 ospf6 [vrf <NAME|all>] database [<detail|dump|internal>] [json]",
SHOW_STR IPV6_STR OSPF6_STR VRF_CMD_HELP_STR
"All VRFs\n"
"Display Link state database\n"
"Display details of LSAs\n"
"Dump LSAs\n"
"Display LSA's internal information\n" JSON_STR)
{
int level;
int idx_level = 4;
struct listnode *node;
struct ospf6 *ospf6;
const char *vrf_name = NULL;
bool all_vrf = false;
int idx_vrf = 0;
bool uj = use_json(argc, argv);

OSPF6_FIND_VRF_ARGS(argv, argc, idx_vrf, vrf_name, all_vrf);
if (idx_vrf > 0)
idx_level += 2;

level = parse_show_level(idx_level, argc, argv);
for (ALL_LIST_ELEMENTS_RO(om6->ospf6, node, ospf6)) {
if (all_vrf || strcmp(ospf6->name, vrf_name) == 0) {
ospf6_lsdb_show_wrapper(vty, level, NULL, NULL, NULL,
uj, ospf6);
if (!all_vrf)
break;
}
}

OSPF6_CMD_CHECK_VRF(uj, all_vrf, ospf6);

return CMD_SUCCESS;
}