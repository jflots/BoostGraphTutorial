#include "get_type_name.h"

#include <cassert>
#include <vector>

#include "create_empty_custom_vertices_graph.h"
#include "create_empty_undirected_graph.h"
#include "create_empty_directed_graph.h"
#include "create_empty_named_vertices_graph.h"
#include "create_empty_named_edges_and_vertices_graph.h"
#include "create_empty_custom_edges_and_vertices_graph.h"

void get_type_name_test() noexcept
{
  assert(get_type_name<double>() == "double");
  assert(get_type_name<int>() == "int");
  assert(get_type_name<std::vector<int>>()
    == "std::vector<int, std::allocator<int> >"
  );
  assert(get_type_name<decltype(boost::adjacency_list<>())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, boost::no_property, boost::no_property, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_undirected_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::no_property, boost::no_property, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_directed_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, boost::no_property, boost::no_property, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_named_vertices_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::property<boost::vertex_name_t, std::string, boost::no_property>, boost::no_property, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_named_edges_and_vertices_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::property<boost::vertex_name_t, std::string, boost::no_property>, boost::property<boost::edge_name_t, std::string, boost::no_property>, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_custom_vertices_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::property<boost::vertex_custom_type_t, my_vertex, boost::no_property>, boost::no_property, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(create_empty_custom_edges_and_vertices_graph())>()
    == "boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::property<boost::vertex_custom_type_t, my_vertex, boost::no_property>, boost::property<boost::edge_custom_type_t, my_edge, boost::no_property>, boost::no_property, boost::listS>"
  );
  assert(get_type_name<decltype(boost::vertices(create_empty_undirected_graph()))>()
    == "std::pair<boost::range_detail::integer_iterator<unsigned int>, boost::range_detail::integer_iterator<unsigned int> >"
  );
  assert(get_type_name<decltype(boost::vertices(create_empty_directed_graph()))>()
    == "std::pair<boost::range_detail::integer_iterator<unsigned int>, boost::range_detail::integer_iterator<unsigned int> >"
  );
  assert(get_type_name<decltype(boost::edges(create_empty_undirected_graph()))>()
    == "std::pair<boost::detail::undirected_edge_iter<std::_List_iterator<boost::list_edge<unsigned int, boost::no_property> >, boost::detail::edge_desc_impl<boost::undirected_tag, unsigned int>, int>, boost::detail::undirected_edge_iter<std::_List_iterator<boost::list_edge<unsigned int, boost::no_property> >, boost::detail::edge_desc_impl<boost::undirected_tag, unsigned int>, int> >"
  );
  assert(get_type_name<decltype(boost::edges(create_empty_directed_graph()))>()
    == "std::pair<boost::detail::adj_list_edge_iterator<boost::range_detail::integer_iterator<unsigned int>, boost::detail::out_edge_iter<__gnu_cxx::__normal_iterator<boost::detail::stored_edge_property<unsigned int, boost::no_property>*, std::vector<boost::detail::stored_edge_property<unsigned int, boost::no_property>, std::allocator<boost::detail::stored_edge_property<unsigned int, boost::no_property> > > >, unsigned int, boost::detail::edge_desc_impl<boost::directed_tag, unsigned int>, int>, boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, boost::no_property, boost::no_property, boost::no_property, boost::listS> >, boost::detail::adj_list_edge_iterator<boost::range_detail::integer_iterator<unsigned int>, boost::detail::out_edge_iter<__gnu_cxx::__normal_iterator<boost::detail::stored_edge_property<unsigned int, boost::no_property>*, std::vector<boost::detail::stored_edge_property<unsigned int, boost::no_property>, std::allocator<boost::detail::stored_edge_property<unsigned int, boost::no_property> > > >, unsigned int, boost::detail::edge_desc_impl<boost::directed_tag, unsigned int>, int>, boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, boost::no_property, boost::no_property, boost::no_property, boost::listS> > >"
  );
  //std::cout
  //  <<  get_type_name<decltype(boost::vertices(create_empty_directed_graph()))>()
  //  << std::endl;
  std::cout << __func__ << ": OK" << '\n';
}