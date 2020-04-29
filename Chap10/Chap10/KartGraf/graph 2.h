#ifndef GRAPH_H
#define GRAPH_H

#include <QPoint>
#include <vector>

typedef int Ixnode;


struct Arc{
    Arc(Ixnode ixNode, bool isVisible, float cost)
        : _ixDestination(ixNode), _isVisible(isVisible), _cost(cost) {}

    Ixnode  _ixDestination;
    bool    _isVisible;
    float   _cost;
};


struct Node{
    QPoint           _point;
    std::vector<Arc> _outputs;
};

typedef std::vector<Node> Graph;

#endif // GRAPH_H
