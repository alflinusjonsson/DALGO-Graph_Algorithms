#include "student1drawgraph.h"


const char* nameOfStudent1(){
    return "Linus Jönsson";
}


void studentsDrawGraph(QPainter& painter, const std::vector<Node>& graph){

    for (Ixnode ix = 0; ix < graph.size() ; ix+=1)
    {
        const Node& node = graph[ix];
        painter.fillRect(node._point.x(), node._point.y(),1,1, Qt::black);

        for (Ixnode jx = 0; jx < node._outputs.size(); jx+=1)
        {
            const Arc& arc = node._outputs[jx];
            if (arc._isVisible)
            {
                painter.drawLine(node._point, graph[arc._ixDestination]._point);
            }
        }

    }
}
