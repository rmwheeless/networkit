/*
 * Dijkstra.h
 *
 *  Created on: Jul 23, 2013
 *      Author: Henning, Christian Staudt
 */

#ifndef DIJKSTRA_H_
#define DIJKSTRA_H_

#include "../auxiliary/PrioQueue.h"
#include "../graph/Graph.h"
#include "SSSP.h"

namespace NetworKit {

/**
 * @ingroup distance
 * Dijkstra's SSSP algorithm.
 */
class Dijkstra : public SSSP {

  friend class DynDijkstra;
  friend class DynDijkstra2;

public:
  /**
   * Creates the Dijkstra class for @a G and the source node @a source.
   *
   * @param G The graph.
   * @param source The source node.
   * @param storePaths Paths are reconstructable and the number of paths is
   *		  stored.
   * @param storeNodesSortedByDistance Store a vector of nodes ordered in
   *		  increasing distance from the source.
   * @param target The target node.
   */
  Dijkstra(const Graph &G, node source, bool storePaths = true,
           bool storeNodesSortedByDistance = false, node target = none);

  /**
   * Performs the Dijkstra SSSP algorithm on the graph given in the
   * constructor.
   */
  virtual void run();
};

} /* namespace NetworKit */
#endif /* DIJKSTRA_H_ */
