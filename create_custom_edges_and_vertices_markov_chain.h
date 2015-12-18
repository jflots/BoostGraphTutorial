#ifndef CREATE_CUSTOM_EDGES_AND_VERTICES_MARKOV_CHAIN_H
#define CREATE_CUSTOM_EDGES_AND_VERTICES_MARKOV_CHAIN_H

#include <boost/graph/adjacency_list.hpp>
#include "install_edge_custom_type.h"
#include "install_vertex_custom_type.h"
#include "my_edge.h"
#include "my_vertex.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::directedS,
  boost::property<
    boost::vertex_custom_type_t, my_vertex
  >,
  boost::property<
    boost::edge_custom_type_t, my_edge
  >
>
create_custom_edges_and_vertices_markov_chain() noexcept;

void create_custom_edges_and_vertices_markov_chain_test() noexcept;

#endif // CREATE_CUSTOM_EDGES_AND_VERTICES_MARKOV_CHAIN_H
