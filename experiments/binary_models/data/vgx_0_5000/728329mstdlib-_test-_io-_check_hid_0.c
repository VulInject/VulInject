
START_TEST(check_hid)
{
M_io_hid_enum_t *hidenum;
size_t           i;

hidenum = M_io_hid_enum(0, NULL, 0, NULL);

ck_assert_msg(hidenum != NULL, "HID Enumeration returned a failure");

for (i=0; i < M_io_hid_enum_count(hidenum); i++) {
event_debug("Device %zu: path='%s', manufacturer='%s', product='%s', serial='%s', vendorid='%04x', productid='%04x'",
i, M_io_hid_enum_path(hidenum, i), M_io_hid_enum_manufacturer(hidenum, i),
M_io_hid_enum_product(hidenum, i), M_io_hid_enum_serial(hidenum, i), 
M_io_hid_enum_vendorid(hidenum, i), M_io_hid_enum_productid(hidenum, i));
}
M_io_hid_enum_destroy(hidenum);

}