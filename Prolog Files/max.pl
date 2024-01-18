max(X, Y, Z) :- X >= Y, Z is X.
max(X, Y, Z) :- X < Y, Z is Y.

% max(10, 20, Z).
