max(X, Y):-
    (
      X=Y ->  
          write('both are equal');
      (X>Y ->  
          write(X));
      (write(Y))
).

%max(10, 15)
