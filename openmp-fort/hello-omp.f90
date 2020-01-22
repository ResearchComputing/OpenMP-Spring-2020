PROGRAM Parallel_Hello_World

!$OMP PARALLEL
    PRINT *, "Hello but in parallel!"
!$OMP END PARALLEL

END
