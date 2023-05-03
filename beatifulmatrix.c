#include <stdio.h>

int main(void) {
  int i, j;
  int matrix[5][5];
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
        {
          scanf("%d", &matrix[i][j]);
        }
    }
  int i0, j0;
  int matrix1[5][5];
  int i1, j1;
  for (i0 = 0; i0 < 5; i0++)
    {
      for (j0 = 0; j0 < 5; j0++)
        {
          if (matrix[i0][j0] == 1)
            {
                i1 = i0;
                j1 = j0;
            }
            else
            {
                continue;
            }
        }
   } 
  int moves = 0;
  switch (i1)
    {
      case 0:
        {
          switch (j1)
            {
              case 0:
                {
                  for (i = 0; i < 2; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 2; ++j)
                    {
                      ++moves;
                    }
                  break;
                }
              case 1:
                {
                  for (i = 0; i < 2; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 1; ++j)
                    {
                      ++moves;
                    }
                  break;
                }
              case 2:
                {
                  for (i = 0; i < 2; ++i)
                    {
                      ++moves;
                    }
                  break;
                }
              case 3:
                {
                  for (i = 0; i < 2; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 1; ++j)
                    {
                     ++moves;
                    }
                  break;
                    }
              case 4:
                {
                  for (i = 0; i < 2; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 2; ++j)
                    {
                      ++moves;
                    }
                  break;
                    }
              default:
                {
                  break;
                 } 
            }
        }
        break;
        case 1:
        {
          switch (j1)
            {
              case 0:
                {
                  for (i = 0; i < 1; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 2; ++j)
                    {
                      ++moves;
                    }
                  break;
                }
              case 1:
                {
                  for (i = 0; i < 1; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 1; ++j)
                    {
                      ++moves;
                    }
                  break;
                }
              case 2:
                {
                  for (i = 0; i < 1; ++i)
                    {
                      ++moves;
                    }
                  break;
                }
              case 3:
                {
                  for (i = 0; i < 1; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 1; ++j)
                    {
                      ++moves;
                    }
                  break;
                    }
              case 4:
                {
                  for (i = 0; i < 1; ++i)
                    {
                      ++moves;
                    }
                  for (j = 0; j < 2; ++j)
                    {
                     ++moves;
                    }
                    break;
                    }
              default:
                {
                  break;
                } 
            }
        }
        break;
        case 2:
        {
            switch (j1)
            {
                case 0:
                {
                    for (j = 0; j < 2; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 1:
                {
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 2:
                {
                    break;
                }
                case 3:
                {
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 4:
                {
                    for (j = 0; j < 2; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        break;
        case 3:
        {
            switch (j1)
            {
                case 0:
                {
                    for (i = 0; i < 2; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 1:
                {
                    for (i = 0; i < 1; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                
                case 2:
                {
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                
                case 3:
                {
                    for (i = 0; i < 1; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                
                case 4:
                {
                    for (i = 0; i < 2; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        break;
        case 4:
        {
            switch (j1)
            {
                case 0:
                {
                   for (i = 0; i < 2; ++i)
                    {
                     ++moves;
                    }
                  for (j = 0; j < 2; ++j)
                    {
                     ++moves;
                    }
                    break; 
                }
                case 1:
                {
                    for (i = 0; i < 2; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 2:
                {
                    for (j = 0; j < 2; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 3:
                {
                    for (i = 0; i < 2; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 1; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                case 4:
                {
                    for (i = 0; i < 2; ++i)
                    {
                       ++moves;
                    }
                    for (j = 0; j < 2; ++j)
                    {
                       ++moves;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        break;
        default:
        {
            break;
        }
    }   
  printf("%d", moves);   
  return 0;
}