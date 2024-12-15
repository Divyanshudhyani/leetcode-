class Solution {
public:
    typedef pair<int, int> pii;
    double passRatioIncrease(double pass, double total) {
        return (pass + 1) / (total + 1) - pass / total;
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraSt) {
        double sumPassRatio = 0;
        priority_queue<pair<double, pii>> pq;
        for (const auto& c : classes) {
            sumPassRatio += 1.0 * c[0] / c[1];
            pq.push( { passRatioIncrease(c[0], c[1]), {c[0], c[1]} });
        }
        while (extraSt--) {
            auto [ratioIncrease, c] = pq.top();
            pq.pop();
            sumPassRatio += ratioIncrease;
            pq.push( { passRatioIncrease(c.first + 1, c.second + 1),
                     { c.first + 1, c.second + 1 } } );
            
        }
        return sumPassRatio / classes.size();
    }
};