void dom_parent_node_append(dom_object *context, zval *nodes, int nodesc)
{
xmlNode *parentNode = dom_object_get_node(context);
xmlNodePtr newchild, prevsib;
xmlNode *fragment = dom_zvals_to_fragment(context->document, parentNode, nodes, nodesc);

if (fragment == NULL) {
return;
}

newchild = fragment->children;
prevsib = parentNode->last;

if (newchild) {
if (prevsib != NULL) {
prevsib->next = newchild;
} else {
parentNode->children = newchild;
}

parentNode->last = fragment->last;

newchild->prev = prevsib;

dom_fragment_assign_parent_node(parentNode, fragment);

dom_reconcile_ns(parentNode->doc, newchild);
}

xmlFree(fragment);
}