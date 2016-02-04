/***************************************************************************************
 *
 * This program solves the 2D puzzle "Lonpos 101".
 * Copyright (C) 2016  Dominik Vilsmeier
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***************************************************************************************/

#include "containerwidget.h"
#include "waiter.h"
#include "rowsolver.h"

RowSolver::RowSolver(BoardWidget *boardwidget, QObject *parent) : QObject(parent), boardwidget(boardwidget)
{
    for(int i=0; i<10; ++i) {
        for(int j=0; j<5; ++j) {
            board[i][j] = 0;
        }
    }

    this->connect(this, SIGNAL(placedPiece(Piece*,QChar,int,int,int,bool)), boardwidget, SLOT(changeSite(Piece*,QChar,int,int,int,bool)));

    pieces = new QList<Piece*>();

    waitTimeMilliSec = WAIT_TIME_MILLI_SEC_DEFAULT;
}

RowSolver::~RowSolver()
{
    delete pieces;
}

void RowSolver::setPieces(QList<Piece*> pieces)
{
    for(QList<Piece*>::iterator it=pieces.begin(); it!=pieces.end(); it+=1) {
        this->pieces->append(*it);
    }
}

void RowSolver::start()
{
    iter_rows(0);
    emit workDone();
}

void RowSolver::iter_rows(const int which_row)
{
}

int RowSolver::placePieceOnBoard(Piece *piece, const int which_row, const int x0, const int rotation)
{
    return 0;
}

void RowSolver::removePieceFromBoard(Piece *piece, const int which_row, const int x0, const int rotation)
{
}
