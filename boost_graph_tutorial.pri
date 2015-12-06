HEADERS += \
  add_vertex.h \
  bfs_name_printer.h \
  build_router_network.h \
  convert_dot_to_svg.h \
  create_empty_graph.h \
  create_k2_graph.h \
  create_named_edges_and_vertices_k3_graph.h \
  create_named_vertices_k2_graph.h \
  create_router_network_graph.h \
  create_router_network.h \
  get_edge_names.h \
  get_n_edges.h \
  get_n_vertices.h \
  get_vertex_names.h \
  is_self_loop.h \
  print_trans_delay.h \
  print_trans_delays.h \
  print_vertex_name.h \
  print_vertex_names.h \
  save_graph_to_dot.h \
  save_named_edges_and_vertices_graph_to_dot.h \
  save_named_vertices_graph_to_dot.h \
  set_vertex_names.h \
  show_dot.h \
  create_tutorial_chapters_graph.h \
  add_edge.h \
  create_empty_named_vertices_graph.h \
  add_named_vertex.h \
  create_empty_named_edges_and_vertices_graph.h \
  add_named_edge.h \
  create_empty_custom_vertices_graph.h \
  my_vertex.h \
  install_vertex_custom_type.h \
  add_custom_vertex.h \
    $$PWD/create_custom_vertices_k2_graph.h

SOURCES += \
  bfs_name_printer.cpp \
  build_router_network.cpp \
  convert_dot_to_svg.cpp \
  create_empty_graph.cpp \
  create_empty_graph_test.cpp \
  create_k2_graph.cpp \
  create_k2_graph_test.cpp \
  create_named_edges_and_vertices_k3_graph.cpp \
  create_named_edges_and_vertices_k3_graph_test.cpp \
  create_named_vertices_k2_graph.cpp \
  create_named_vertices_k2_graph_test.cpp \
  create_router_network.cpp \
  create_router_network_graph.cpp \
  create_router_network_graph_test.cpp \
  is_self_loop_test.cpp \
  show_dot.cpp \
  add_vertex.cpp \
  create_tutorial_chapters_graph.cpp \
  add_edge.cpp \
  create_empty_named_vertices_graph.cpp \
  create_empty_named_vertices_graph_test.cpp \
  add_named_vertex.cpp \
  create_empty_named_edges_and_vertices_graph.cpp \
  add_named_edge.cpp \
  get_edge_names.cpp \
  create_empty_custom_vertices_graph.cpp \
  my_vertex.cpp \
  add_custom_vertex.cpp \
    $$PWD/create_custom_vertices_k2_graph.cpp \
    $$PWD/get_n_vertices.cpp \
    $$PWD/get_n_edges.cpp \
    $$PWD/get_vertex_names.cpp \
    $$PWD/set_vertex_names.cpp \
    $$PWD/save_graph_to_dot.cpp \
    $$PWD/print_vertex_names.cpp \
    $$PWD/print_vertex_name.cpp \
    $$PWD/print_trans_delays.cpp \
    $$PWD/print_trans_delay.cpp \
    $$PWD/save_named_edges_and_vertices_graph_to_dot.cpp \
    $$PWD/save_named_vertices_graph_to_dot.cpp

# .impl files are the clean tutorial code snippets,
# without header guards and
# other housekeeping
DISTFILES += \
  add_vertex.impl \
  add_edge.impl \
  create_empty_named_vertices_graph.impl \
  add_named_vertex.impl \
  create_empty_named_edges_and_vertices_graph.impl \
  add_named_edge.impl \
  create_empty_custom_vertices_graph.impl \
  install_vertex_custom_type.impl \
  add_custom_vertex.impl \
    $$PWD/create_custom_vertices_k2_graph.impl
